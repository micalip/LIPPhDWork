{
//=========Macro generated from canvas: DataDist/cf
//=========  (Thu Oct 18 23:53:21 2012) by ROOT version5.30/00
   TCanvas *DataDist = new TCanvas("DataDist", "cf",20,42,800,800);
   gStyle->SetOptStat(0);
   DataDist->Range(-1125001,-0.0525,1.00125e+08,0.4725);
   DataDist->SetFillColor(0);
   DataDist->SetBorderMode(0);
   DataDist->SetBorderSize(2);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   
   TH1D *HistDATA__1 = new TH1D("HistDATA__1","",30,9000000,9e+07);
   HistDATA__1->SetBinContent(21,0.4);
   HistDATA__1->SetBinContent(22,0.2);
   HistDATA__1->SetBinContent(25,0.2);
   HistDATA__1->SetBinContent(26,0.2);
   HistDATA__1->SetEntries(5);
   HistDATA__1->SetDirectory(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   HistDATA__1->SetLineColor(ci);
   HistDATA__1->SetLineWidth(4);
   HistDATA__1->GetXaxis()->SetLabelFont(42);
   HistDATA__1->GetXaxis()->SetLabelSize(0.035);
   HistDATA__1->GetXaxis()->SetTitleSize(0.035);
   HistDATA__1->GetXaxis()->SetTitleFont(42);
   HistDATA__1->GetYaxis()->SetLabelFont(42);
   HistDATA__1->GetYaxis()->SetLabelSize(0.035);
   HistDATA__1->GetYaxis()->SetTitleSize(0.035);
   HistDATA__1->GetYaxis()->SetTitleFont(42);
   HistDATA__1->GetZaxis()->SetLabelFont(42);
   HistDATA__1->GetZaxis()->SetLabelSize(0.035);
   HistDATA__1->GetZaxis()->SetTitleSize(0.035);
   HistDATA__1->GetZaxis()->SetTitleFont(42);
   HistDATA__1->Draw("");
   
   TH1D *hmuP__2 = new TH1D("hmuP__2","hmuP",30,9000000,9e+07);
   hmuP__2->SetBinContent(4,0.01659751);
   hmuP__2->SetBinContent(5,0.03319502);
   hmuP__2->SetBinContent(6,0.0746888);
   hmuP__2->SetBinContent(7,0.1327801);
   hmuP__2->SetBinContent(8,0.2033195);
   hmuP__2->SetBinContent(9,0.2655602);
   hmuP__2->SetBinContent(10,0.1327801);
   hmuP__2->SetBinContent(11,0.07883817);
   hmuP__2->SetBinContent(12,0.0373444);
   hmuP__2->SetBinContent(13,0.008298755);
   hmuP__2->SetBinContent(14,0.01659751);
   hmuP__2->SetEntries(241);
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
   
   TH1D *hmuFe__3 = new TH1D("hmuFe__3","hmuFe",30,9000000,9e+07);
   hmuFe__3->SetBinContent(9,0.01639344);
   hmuFe__3->SetBinContent(10,0.1147541);
   hmuFe__3->SetBinContent(11,0.2581967);
   hmuFe__3->SetBinContent(12,0.3155738);
   hmuFe__3->SetBinContent(13,0.1967213);
   hmuFe__3->SetBinContent(14,0.04918033);
   hmuFe__3->SetBinContent(15,0.03278689);
   hmuFe__3->SetBinContent(16,0.01229508);
   hmuFe__3->SetBinContent(17,0.004098361);
   hmuFe__3->SetEntries(244);
   hmuFe__3->SetDirectory(0);
   hmuFe__3->SetLineColor(4);
   hmuFe__3->GetXaxis()->SetLabelFont(42);
   hmuFe__3->GetXaxis()->SetLabelSize(0.035);
   hmuFe__3->GetXaxis()->SetTitleSize(0.035);
   hmuFe__3->GetXaxis()->SetTitleFont(42);
   hmuFe__3->GetYaxis()->SetLabelFont(42);
   hmuFe__3->GetYaxis()->SetLabelSize(0.035);
   hmuFe__3->GetYaxis()->SetTitleSize(0.035);
   hmuFe__3->GetYaxis()->SetTitleFont(42);
   hmuFe__3->GetZaxis()->SetLabelFont(42);
   hmuFe__3->GetZaxis()->SetLabelSize(0.035);
   hmuFe__3->GetZaxis()->SetTitleSize(0.035);
   hmuFe__3->GetZaxis()->SetTitleFont(42);
   hmuFe__3->Draw("SAME");
   DataDist->Modified();
   DataDist->cd();
   DataDist->SetSelected(DataDist);
}
