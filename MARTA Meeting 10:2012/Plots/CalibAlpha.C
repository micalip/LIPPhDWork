{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Oct 19 00:36:56 2012) by ROOT version5.30/00
   TCanvas *c1 = new TCanvas("c1", "c1",131,53,600,600);
   c1->Range(18.412,0.638445,19.732,1.445961);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(7);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,18.5,0.937905);
   gre->SetPointError(0,0,0.164874);
   gre->SetPoint(1,18.6,1.20277);
   gre->SetPointError(1,0,0.108605);
   gre->SetPoint(2,18.8,1.09257);
   gre->SetPointError(2,0,0.0726881);
   gre->SetPoint(3,19.2,1.00993);
   gre->SetPointError(3,0,0.0721752);
   gre->SetPoint(4,19.4,1.05288);
   gre->SetPointError(4,0,0.0498056);
   gre->SetPoint(5,19.5,1.00525);
   gre->SetPointError(5,0,0.0431133);
   gre->SetPoint(6,19,1.06228);
   gre->SetPointError(6,0,0.0713809);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,18.4,19.6);
   Graph_Graph1->SetMinimum(0.7191966);
   Graph_Graph1->SetMaximum(1.365209);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("log_{10}(E)");
   Graph_Graph1->GetXaxis()->SetRange(13,100);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#alpha");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   
   TF1 *falpha = new TF1("falpha","pol1",18.53,20);
   falpha->SetFillColor(19);
   falpha->SetFillStyle(0);

   ci = TColor::GetColor("#cc0000");
   falpha->SetLineColor(ci);
   falpha->SetLineWidth(2);
   falpha->SetChisquare(1.172741);
   falpha->SetNDF(4);
   falpha->GetXaxis()->SetLabelFont(42);
   falpha->GetXaxis()->SetLabelSize(0.035);
   falpha->GetXaxis()->SetTitleSize(0.035);
   falpha->GetXaxis()->SetTitleFont(42);
   falpha->GetYaxis()->SetLabelFont(42);
   falpha->GetYaxis()->SetLabelSize(0.035);
   falpha->GetYaxis()->SetTitleSize(0.035);
   falpha->GetYaxis()->SetTitleFont(42);
   falpha->SetParameter(0,3.737791);
   falpha->SetParError(0,1.69105);
   falpha->SetParLimits(0,0,0);
   falpha->SetParameter(1,-0.1398764);
   falpha->SetParError(1,0.0878485);
   falpha->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(falpha);
   gre->Draw("ap");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
