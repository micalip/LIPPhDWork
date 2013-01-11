{
//=========Macro generated from canvas: DataDist/cf
//=========  (Thu Oct 18 23:54:26 2012) by ROOT version5.30/00
   TCanvas *DataDist = new TCanvas("DataDist", "cf",20,42,800,800);
   gStyle->SetOptStat(0);
   DataDist->Range(-4375001,-0.0462,8.9375e+07,0.4158);
   DataDist->SetFillColor(0);
   DataDist->SetBorderMode(0);
   DataDist->SetBorderSize(2);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   
   TH1D *hmuFe__1 = new TH1D("hmuFe__1","",30,5000000,8e+07);
   hmuFe__1->SetBinContent(8,0.028);
   hmuFe__1->SetBinContent(9,0.112);
   hmuFe__1->SetBinContent(10,0.204);
   hmuFe__1->SetBinContent(11,0.352);
   hmuFe__1->SetBinContent(12,0.24);
   hmuFe__1->SetBinContent(13,0.056);
   hmuFe__1->SetBinContent(14,0.008);
   hmuFe__1->SetEntries(250);
   hmuFe__1->SetDirectory(0);
   hmuFe__1->SetLineColor(4);
   hmuFe__1->GetXaxis()->SetLabelFont(42);
   hmuFe__1->GetXaxis()->SetLabelSize(0.035);
   hmuFe__1->GetXaxis()->SetTitleSize(0.035);
   hmuFe__1->GetXaxis()->SetTitleFont(42);
   hmuFe__1->GetYaxis()->SetLabelFont(42);
   hmuFe__1->GetYaxis()->SetLabelSize(0.035);
   hmuFe__1->GetYaxis()->SetTitleSize(0.035);
   hmuFe__1->GetYaxis()->SetTitleFont(42);
   hmuFe__1->GetZaxis()->SetLabelFont(42);
   hmuFe__1->GetZaxis()->SetLabelSize(0.035);
   hmuFe__1->GetZaxis()->SetTitleSize(0.035);
   hmuFe__1->GetZaxis()->SetTitleFont(42);
   hmuFe__1->Draw("");
   
   TH1D *hmuP__2 = new TH1D("hmuP__2","hmuP",30,5000000,8e+07);
   hmuP__2->SetBinContent(3,0.004201681);
   hmuP__2->SetBinContent(4,0.0210084);
   hmuP__2->SetBinContent(5,0.02521008);
   hmuP__2->SetBinContent(6,0.05462185);
   hmuP__2->SetBinContent(7,0.1344538);
   hmuP__2->SetBinContent(8,0.2563025);
   hmuP__2->SetBinContent(9,0.2184874);
   hmuP__2->SetBinContent(10,0.1680672);
   hmuP__2->SetBinContent(11,0.1008403);
   hmuP__2->SetBinContent(12,0.01680672);
   hmuP__2->SetEntries(238);
   hmuP__2->SetDirectory(0);
   hmuP__2->SetLineColor(2);
   hmuP__2->GetXaxis()->SetLabelFont(42);
   hmuP__2->GetXaxis()->SetLabelSize(0.035);
   hmuP__2->GetXaxis()->SetTitleSize(0.035);
   hmuP__2->GetXaxis()->SetTitleFont(42);
   hmuP__2->GetYaxis()->SetLabelFont(42);
   hmuP__2->GetYaxis()->SetLabelSize(0.035);
   hmuP__2->GetYaxis()->SetTitleSize(0.035);
   hmuP__2->GetYaxis()->SetTitleFont(42);
   hmuP__2->GetZaxis()->SetLabelFont(42);
   hmuP__2->GetZaxis()->SetLabelSize(0.035);
   hmuP__2->GetZaxis()->SetTitleSize(0.035);
   hmuP__2->GetZaxis()->SetTitleFont(42);
   hmuP__2->Draw("SAME");
   
   TH1D *HistDATA__3 = new TH1D("HistDATA__3","HistDATA",30,5000000,8e+07);
   HistDATA__3->SetBinContent(18,0.06666667);
   HistDATA__3->SetBinContent(19,0.1333333);
   HistDATA__3->SetBinContent(20,0.2666667);
   HistDATA__3->SetBinContent(21,0.1333333);
   HistDATA__3->SetBinContent(22,0.2);
   HistDATA__3->SetBinContent(23,0.1333333);
   HistDATA__3->SetBinContent(24,0.06666667);
   HistDATA__3->SetEntries(15);
   HistDATA__3->SetDirectory(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   HistDATA__3->SetLineColor(ci);
   HistDATA__3->SetLineWidth(4);
   HistDATA__3->GetXaxis()->SetLabelFont(42);
   HistDATA__3->GetXaxis()->SetLabelSize(0.035);
   HistDATA__3->GetXaxis()->SetTitleSize(0.035);
   HistDATA__3->GetXaxis()->SetTitleFont(42);
   HistDATA__3->GetYaxis()->SetLabelFont(42);
   HistDATA__3->GetYaxis()->SetLabelSize(0.035);
   HistDATA__3->GetYaxis()->SetTitleSize(0.035);
   HistDATA__3->GetYaxis()->SetTitleFont(42);
   HistDATA__3->GetZaxis()->SetLabelFont(42);
   HistDATA__3->GetZaxis()->SetLabelSize(0.035);
   HistDATA__3->GetZaxis()->SetTitleSize(0.035);
   HistDATA__3->GetZaxis()->SetTitleFont(42);
   HistDATA__3->Draw("SAME");
   DataDist->Modified();
   DataDist->cd();
   DataDist->SetSelected(DataDist);
}
