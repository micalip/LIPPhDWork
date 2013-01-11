{
//=========Macro generated from canvas: Resolution/crmu0
//=========  (Thu Oct 18 20:45:54 2012) by ROOT version5.30/00
   TCanvas *Resolution = new TCanvas("Resolution", "crmu0",7,282,600,600);
   Resolution->Range(6.516524,0.05970407,7.771511,0.2368607);
   Resolution->SetFillColor(0);
   Resolution->SetBorderMode(0);
   Resolution->SetBorderSize(2);
   Resolution->SetFrameLineWidth(2);
   Resolution->SetFrameBorderMode(0);
   Resolution->SetFrameLineWidth(2);
   Resolution->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraph *graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,6.687658,0.212703);
   graph->SetPoint(1,6.822389,0.174763);
   graph->SetPoint(2,7.19293,0.10991);
   graph->SetPoint(3,7.396173,0.10348);
   graph->SetPoint(4,7.489783,0.0964158);
   graph->SetPoint(5,7.010775,0.133438);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,6.607446,7.569995);
   Graph_Graph1->SetMinimum(0.08478708);
   Graph_Graph1->SetMaximum(0.2243317);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   graph = new TGraph(6);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,6.786139,0.161818);
   graph->SetPoint(1,6.932967,0.133587);
   graph->SetPoint(2,7.296116,0.103188);
   graph->SetPoint(3,7.489386,0.086918);
   graph->SetPoint(4,7.600376,0.0838618);
   graph->SetPoint(5,7.116146,0.119081);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,6.704715,7.6818);
   Graph_Graph2->SetMinimum(0.07606618);
   Graph_Graph2->SetMaximum(0.1696136);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("Log_{10}(N_{#mu})");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleOffset(1.4);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("Resolution");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleOffset(1.4);
   multigraph->GetYaxis()->SetTitleFont(42);
   Resolution->Modified();
   Resolution->cd();
   Resolution->SetSelected(Resolution);
}
