{
//=========Macro generated from canvas: c2/c2
//=========  (Fri Oct 19 00:37:08 2012) by ROOT version5.30/00
   TCanvas *c2 = new TCanvas("c2", "c2",762,22,600,600);
   c2->Range(18.412,-910817.8,19.732,8197360);
   c2->SetFillColor(0);
   c2->SetBorderMode(0);
   c2->SetBorderSize(2);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   c2->SetFrameLineWidth(2);
   c2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(7);
   gre->SetName("Graph");
   gre->SetTitle("");
   gre->SetFillColor(1);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(9);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,18.5,1915920);
   gre->SetPointError(0,0,595107);
   gre->SetPoint(1,18.6,922631);
   gre->SetPointError(1,0,488781);
   gre->SetPoint(2,18.8,1401610);
   gre->SetPointError(2,0,505683);
   gre->SetPoint(3,19.2,3445790);
   gre->SetPointError(3,0,1154050);
   gre->SetPoint(4,19.4,3112830);
   gre->SetPointError(4,0,1254220);
   gre->SetPoint(5,19.5,5359010);
   gre->SetPointError(5,0,1304560);
   gre->SetPoint(6,19,1991840);
   gre->SetPointError(6,0,772238);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,18.4,19.6);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(7286542);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("log_{10}(E)");
   Graph_Graph2->GetXaxis()->SetRange(13,100);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("#beta");
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.4);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   
   TF1 *fbeta = new TF1("fbeta","pol1",18.53,20);
   fbeta->SetFillColor(19);
   fbeta->SetFillStyle(0);
   fbeta->SetLineColor(9);
   fbeta->SetLineWidth(2);
   fbeta->SetChisquare(1.526749);
   fbeta->SetNDF(4);
   fbeta->GetXaxis()->SetLabelFont(42);
   fbeta->GetXaxis()->SetLabelSize(0.035);
   fbeta->GetXaxis()->SetTitleSize(0.035);
   fbeta->GetXaxis()->SetTitleFont(42);
   fbeta->GetYaxis()->SetLabelFont(42);
   fbeta->GetYaxis()->SetLabelSize(0.035);
   fbeta->GetYaxis()->SetTitleSize(0.035);
   fbeta->GetYaxis()->SetTitleFont(42);
   fbeta->SetParameter(0,-7.206892e+07);
   fbeta->SetParError(0,2.054935e+07);
   fbeta->SetParLimits(0,0,0);
   fbeta->SetParameter(1,3915332);
   fbeta->SetParError(1,1090022);
   fbeta->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(fbeta);
   gre->Draw("ap");
   c2->Modified();
   c2->cd();
   c2->SetSelected(c2);
}
