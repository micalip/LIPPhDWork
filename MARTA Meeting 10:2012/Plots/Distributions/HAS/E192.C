{
//=========Macro generated from canvas: DataDist/cf
//=========  (Thu Oct 18 23:55:33 2012) by ROOT version5.30/00
   TCanvas *DataDist = new TCanvas("DataDist", "cf",20,42,800,800);
   gStyle->SetOptStat(0);
   DataDist->Range(-8875001,-0.06078382,8.9875e+07,0.5470543);
   DataDist->SetFillColor(0);
   DataDist->SetBorderMode(0);
   DataDist->SetBorderSize(2);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   DataDist->SetFrameLineWidth(2);
   DataDist->SetFrameBorderMode(0);
   
   TH1D *hmuP__1 = new TH1D("hmuP__1","",30,1000000,8e+07);
   hmuP__1->SetBinContent(4,0.0204918);
   hmuP__1->SetBinContent(5,0.2336066);
   hmuP__1->SetBinContent(6,0.4631148);
   hmuP__1->SetBinContent(7,0.2172131);
   hmuP__1->SetBinContent(8,0.05737705);
   hmuP__1->SetBinContent(9,0.008196721);
   hmuP__1->SetEntries(244);
   hmuP__1->SetDirectory(0);
   hmuP__1->SetLineColor(2);
   hmuP__1->GetXaxis()->SetLabelFont(42);
   hmuP__1->GetXaxis()->SetLabelSize(0.035);
   hmuP__1->GetXaxis()->SetTitleSize(0.035);
   hmuP__1->GetXaxis()->SetTitleFont(42);
   hmuP__1->GetYaxis()->SetLabelFont(42);
   hmuP__1->GetYaxis()->SetLabelSize(0.035);
   hmuP__1->GetYaxis()->SetTitleSize(0.035);
   hmuP__1->GetYaxis()->SetTitleFont(42);
   hmuP__1->GetZaxis()->SetLabelFont(42);
   hmuP__1->GetZaxis()->SetLabelSize(0.035);
   hmuP__1->GetZaxis()->SetTitleSize(0.035);
   hmuP__1->GetZaxis()->SetTitleFont(42);
   hmuP__1->Draw("");
   
   TH1D *hmuFe__2 = new TH1D("hmuFe__2","",30,1000000,8e+07);
   hmuFe__2->SetBinContent(5,0.004032258);
   hmuFe__2->SetBinContent(6,0.08467742);
   hmuFe__2->SetBinContent(7,0.3709677);
   hmuFe__2->SetBinContent(8,0.375);
   hmuFe__2->SetBinContent(9,0.141129);
   hmuFe__2->SetBinContent(10,0.02419355);
   hmuFe__2->SetEntries(248);
   hmuFe__2->SetDirectory(0);
   hmuFe__2->SetLineColor(4);
   hmuFe__2->GetXaxis()->SetLabelFont(42);
   hmuFe__2->GetXaxis()->SetLabelSize(0.035);
   hmuFe__2->GetXaxis()->SetTitleSize(0.035);
   hmuFe__2->GetXaxis()->SetTitleFont(42);
   hmuFe__2->GetYaxis()->SetLabelFont(42);
   hmuFe__2->GetYaxis()->SetLabelSize(0.035);
   hmuFe__2->GetYaxis()->SetTitleSize(0.035);
   hmuFe__2->GetYaxis()->SetTitleFont(42);
   hmuFe__2->GetZaxis()->SetLabelFont(42);
   hmuFe__2->GetZaxis()->SetLabelSize(0.035);
   hmuFe__2->GetZaxis()->SetTitleSize(0.035);
   hmuFe__2->GetZaxis()->SetTitleFont(42);
   hmuFe__2->Draw("SAME");
   
   TH1D *HistDATA__3 = new TH1D("HistDATA__3","HistDATA",30,1000000,8e+07);
   HistDATA__3->SetBinContent(10,0.0212766);
   HistDATA__3->SetBinContent(12,0.04255319);
   HistDATA__3->SetBinContent(13,0.1914894);
   HistDATA__3->SetBinContent(14,0.2978723);
   HistDATA__3->SetBinContent(15,0.2765957);
   HistDATA__3->SetBinContent(16,0.1489362);
   HistDATA__3->SetBinContent(17,0.0212766);
   HistDATA__3->SetEntries(47);
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
