{
//=========Macro generated from canvas: DataDist/cf
//=========  (Fri Oct 19 00:20:53 2012) by ROOT version5.30/00
   TCanvas *DataDist = new TCanvas("DataDist", "cf",20,42,800,800);
   gStyle->SetOptStat(0);
   DataDist->Range(-5625001,-0.0504,1.00625e+08,0.4536);
   DataDist->SetFillColor(0);
   DataDist->SetBorderMode(0);
   DataDist->SetBorderSize(2);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   
   TH1D *hmuFe__1 = new TH1D("hmuFe__1","",30,5000000,9e+07);
   hmuFe__1->SetBinContent(7,0.024);
   hmuFe__1->SetBinContent(8,0.124);
   hmuFe__1->SetBinContent(9,0.276);
   hmuFe__1->SetBinContent(10,0.384);
   hmuFe__1->SetBinContent(11,0.176);
   hmuFe__1->SetBinContent(12,0.012);
   hmuFe__1->SetBinContent(13,0.004);
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
   
   TH1D *hmuP__2 = new TH1D("hmuP__2","hmuP",30,5000000,9e+07);
   hmuP__2->SetBinContent(3,0.008403361);
   hmuP__2->SetBinContent(4,0.03361345);
   hmuP__2->SetBinContent(5,0.02521008);
   hmuP__2->SetBinContent(6,0.1218487);
   hmuP__2->SetBinContent(7,0.2857143);
   hmuP__2->SetBinContent(8,0.2521008);
   hmuP__2->SetBinContent(9,0.2058824);
   hmuP__2->SetBinContent(10,0.05462185);
   hmuP__2->SetBinContent(11,0.01260504);
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
   
   TH1D *HistDATA__3 = new TH1D("HistDATA__3","HistDATA",30,5000000,9e+07);
   HistDATA__3->SetBinContent(0,0.5555556);
   HistDATA__3->SetBinContent(12,0.2222222);
   HistDATA__3->SetBinContent(13,0.1111111);
   HistDATA__3->SetBinContent(14,0.1111111);
   HistDATA__3->SetBinContent(15,0.2222222);
   HistDATA__3->SetBinContent(18,0.1111111);
   HistDATA__3->SetBinContent(20,0.2222222);
   HistDATA__3->SetEntries(14);
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
