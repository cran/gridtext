// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "gridtext_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// bl_make_null_box
BoxPtr<GridRenderer> bl_make_null_box(double width_pt, double height_pt);
RcppExport SEXP _gridtext_bl_make_null_box(SEXP width_ptSEXP, SEXP height_ptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< double >::type height_pt(height_ptSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_null_box(width_pt, height_pt));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_par_box
BoxPtr<GridRenderer> bl_make_par_box(const List& node_list, double vspacing_pt, String width_policy, RObject hjust);
RcppExport SEXP _gridtext_bl_make_par_box(SEXP node_listSEXP, SEXP vspacing_ptSEXP, SEXP width_policySEXP, SEXP hjustSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type node_list(node_listSEXP);
    Rcpp::traits::input_parameter< double >::type vspacing_pt(vspacing_ptSEXP);
    Rcpp::traits::input_parameter< String >::type width_policy(width_policySEXP);
    Rcpp::traits::input_parameter< RObject >::type hjust(hjustSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_par_box(node_list, vspacing_pt, width_policy, hjust));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_rect_box
BoxPtr<GridRenderer> bl_make_rect_box(RObject content, double width_pt, double height_pt, NumericVector margin, NumericVector padding, List gp, double content_hjust, double content_vjust, String width_policy, String height_policy, double r);
RcppExport SEXP _gridtext_bl_make_rect_box(SEXP contentSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP, SEXP marginSEXP, SEXP paddingSEXP, SEXP gpSEXP, SEXP content_hjustSEXP, SEXP content_vjustSEXP, SEXP width_policySEXP, SEXP height_policySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type content(contentSEXP);
    Rcpp::traits::input_parameter< double >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< double >::type height_pt(height_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type margin(marginSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type padding(paddingSEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< double >::type content_hjust(content_hjustSEXP);
    Rcpp::traits::input_parameter< double >::type content_vjust(content_vjustSEXP);
    Rcpp::traits::input_parameter< String >::type width_policy(width_policySEXP);
    Rcpp::traits::input_parameter< String >::type height_policy(height_policySEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_rect_box(content, width_pt, height_pt, margin, padding, gp, content_hjust, content_vjust, width_policy, height_policy, r));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_text_box
BoxPtr<GridRenderer> bl_make_text_box(const CharacterVector& label, List gp, double voff_pt);
RcppExport SEXP _gridtext_bl_make_text_box(SEXP labelSEXP, SEXP gpSEXP, SEXP voff_ptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type label(labelSEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< double >::type voff_pt(voff_ptSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_text_box(label, gp, voff_pt));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_raster_box
BoxPtr<GridRenderer> bl_make_raster_box(RObject image, double width_pt, double height_pt, String width_policy, String height_policy, bool respect_aspect, bool interpolate, double dpi, List gp);
RcppExport SEXP _gridtext_bl_make_raster_box(SEXP imageSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP, SEXP width_policySEXP, SEXP height_policySEXP, SEXP respect_aspectSEXP, SEXP interpolateSEXP, SEXP dpiSEXP, SEXP gpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type image(imageSEXP);
    Rcpp::traits::input_parameter< double >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< double >::type height_pt(height_ptSEXP);
    Rcpp::traits::input_parameter< String >::type width_policy(width_policySEXP);
    Rcpp::traits::input_parameter< String >::type height_policy(height_policySEXP);
    Rcpp::traits::input_parameter< bool >::type respect_aspect(respect_aspectSEXP);
    Rcpp::traits::input_parameter< bool >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< double >::type dpi(dpiSEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_raster_box(image, width_pt, height_pt, width_policy, height_policy, respect_aspect, interpolate, dpi, gp));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_vbox
BoxPtr<GridRenderer> bl_make_vbox(const List& node_list, double width_pt, double hjust, double vjust, String width_policy);
RcppExport SEXP _gridtext_bl_make_vbox(SEXP node_listSEXP, SEXP width_ptSEXP, SEXP hjustSEXP, SEXP vjustSEXP, SEXP width_policySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type node_list(node_listSEXP);
    Rcpp::traits::input_parameter< double >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< double >::type hjust(hjustSEXP);
    Rcpp::traits::input_parameter< double >::type vjust(vjustSEXP);
    Rcpp::traits::input_parameter< String >::type width_policy(width_policySEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_vbox(node_list, width_pt, hjust, vjust, width_policy));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_regular_space_glue
BoxPtr<GridRenderer> bl_make_regular_space_glue(List gp, double stretch_ratio, double shrink_ratio);
RcppExport SEXP _gridtext_bl_make_regular_space_glue(SEXP gpSEXP, SEXP stretch_ratioSEXP, SEXP shrink_ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< double >::type stretch_ratio(stretch_ratioSEXP);
    Rcpp::traits::input_parameter< double >::type shrink_ratio(shrink_ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_make_regular_space_glue(gp, stretch_ratio, shrink_ratio));
    return rcpp_result_gen;
END_RCPP
}
// bl_make_forced_break_penalty
BoxPtr<GridRenderer> bl_make_forced_break_penalty();
RcppExport SEXP _gridtext_bl_make_forced_break_penalty() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(bl_make_forced_break_penalty());
    return rcpp_result_gen;
END_RCPP
}
// bl_make_never_break_penalty
BoxPtr<GridRenderer> bl_make_never_break_penalty();
RcppExport SEXP _gridtext_bl_make_never_break_penalty() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(bl_make_never_break_penalty());
    return rcpp_result_gen;
END_RCPP
}
// bl_box_width
double bl_box_width(BoxPtr<GridRenderer> node);
RcppExport SEXP _gridtext_bl_box_width(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_box_width(node));
    return rcpp_result_gen;
END_RCPP
}
// bl_box_height
double bl_box_height(BoxPtr<GridRenderer> node);
RcppExport SEXP _gridtext_bl_box_height(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_box_height(node));
    return rcpp_result_gen;
END_RCPP
}
// bl_box_ascent
double bl_box_ascent(BoxPtr<GridRenderer> node);
RcppExport SEXP _gridtext_bl_box_ascent(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_box_ascent(node));
    return rcpp_result_gen;
END_RCPP
}
// bl_box_descent
double bl_box_descent(BoxPtr<GridRenderer> node);
RcppExport SEXP _gridtext_bl_box_descent(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_box_descent(node));
    return rcpp_result_gen;
END_RCPP
}
// bl_box_voff
double bl_box_voff(BoxPtr<GridRenderer> node);
RcppExport SEXP _gridtext_bl_box_voff(SEXP nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_box_voff(node));
    return rcpp_result_gen;
END_RCPP
}
// bl_calc_layout
void bl_calc_layout(BoxPtr<GridRenderer> node, double width_pt, double height_pt);
RcppExport SEXP _gridtext_bl_calc_layout(SEXP nodeSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< double >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< double >::type height_pt(height_ptSEXP);
    bl_calc_layout(node, width_pt, height_pt);
    return R_NilValue;
END_RCPP
}
// bl_place
void bl_place(BoxPtr<GridRenderer> node, double x_pt, double y_pt);
RcppExport SEXP _gridtext_bl_place(SEXP nodeSEXP, SEXP x_ptSEXP, SEXP y_ptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< double >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< double >::type y_pt(y_ptSEXP);
    bl_place(node, x_pt, y_pt);
    return R_NilValue;
END_RCPP
}
// bl_render
RObject bl_render(BoxPtr<GridRenderer> node, double x_pt, double y_pt);
RcppExport SEXP _gridtext_bl_render(SEXP nodeSEXP, SEXP x_ptSEXP, SEXP y_ptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< BoxPtr<GridRenderer> >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< double >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< double >::type y_pt(y_ptSEXP);
    rcpp_result_gen = Rcpp::wrap(bl_render(node, x_pt, y_pt));
    return rcpp_result_gen;
END_RCPP
}
// grid_renderer
XPtr<GridRenderer> grid_renderer();
RcppExport SEXP _gridtext_grid_renderer() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(grid_renderer());
    return rcpp_result_gen;
END_RCPP
}
// grid_renderer_text
void grid_renderer_text(XPtr<GridRenderer> gr, const CharacterVector& label, Length x, Length y, List gp);
RcppExport SEXP _gridtext_grid_renderer_text(SEXP grSEXP, SEXP labelSEXP, SEXP xSEXP, SEXP ySEXP, SEXP gpSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GridRenderer> >::type gr(grSEXP);
    Rcpp::traits::input_parameter< const CharacterVector& >::type label(labelSEXP);
    Rcpp::traits::input_parameter< Length >::type x(xSEXP);
    Rcpp::traits::input_parameter< Length >::type y(ySEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    grid_renderer_text(gr, label, x, y, gp);
    return R_NilValue;
END_RCPP
}
// grid_renderer_text_details
List grid_renderer_text_details(const CharacterVector& label, List gp);
RcppExport SEXP _gridtext_grid_renderer_text_details(SEXP labelSEXP, SEXP gpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const CharacterVector& >::type label(labelSEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    rcpp_result_gen = Rcpp::wrap(grid_renderer_text_details(label, gp));
    return rcpp_result_gen;
END_RCPP
}
// grid_renderer_raster
void grid_renderer_raster(XPtr<GridRenderer> gr, RObject image, Length x, Length y, Length width, Length height, bool interpolate);
RcppExport SEXP _gridtext_grid_renderer_raster(SEXP grSEXP, SEXP imageSEXP, SEXP xSEXP, SEXP ySEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP interpolateSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GridRenderer> >::type gr(grSEXP);
    Rcpp::traits::input_parameter< RObject >::type image(imageSEXP);
    Rcpp::traits::input_parameter< Length >::type x(xSEXP);
    Rcpp::traits::input_parameter< Length >::type y(ySEXP);
    Rcpp::traits::input_parameter< Length >::type width(widthSEXP);
    Rcpp::traits::input_parameter< Length >::type height(heightSEXP);
    Rcpp::traits::input_parameter< bool >::type interpolate(interpolateSEXP);
    grid_renderer_raster(gr, image, x, y, width, height, interpolate);
    return R_NilValue;
END_RCPP
}
// grid_renderer_rect
void grid_renderer_rect(XPtr<GridRenderer> gr, Length x, Length y, Length width, Length height, List gp, Length r);
RcppExport SEXP _gridtext_grid_renderer_rect(SEXP grSEXP, SEXP xSEXP, SEXP ySEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP gpSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GridRenderer> >::type gr(grSEXP);
    Rcpp::traits::input_parameter< Length >::type x(xSEXP);
    Rcpp::traits::input_parameter< Length >::type y(ySEXP);
    Rcpp::traits::input_parameter< Length >::type width(widthSEXP);
    Rcpp::traits::input_parameter< Length >::type height(heightSEXP);
    Rcpp::traits::input_parameter< List >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< Length >::type r(rSEXP);
    grid_renderer_rect(gr, x, y, width, height, gp, r);
    return R_NilValue;
END_RCPP
}
// grid_renderer_collect_grobs
List grid_renderer_collect_grobs(XPtr<GridRenderer> gr);
RcppExport SEXP _gridtext_grid_renderer_collect_grobs(SEXP grSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<GridRenderer> >::type gr(grSEXP);
    rcpp_result_gen = Rcpp::wrap(grid_renderer_collect_grobs(gr));
    return rcpp_result_gen;
END_RCPP
}
// unit_pt
NumericVector unit_pt(NumericVector x);
RcppExport SEXP _gridtext_unit_pt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(unit_pt(x));
    return rcpp_result_gen;
END_RCPP
}
// gpar_empty
List gpar_empty();
RcppExport SEXP _gridtext_gpar_empty() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(gpar_empty());
    return rcpp_result_gen;
END_RCPP
}
// text_grob
List text_grob(CharacterVector label, NumericVector x_pt, NumericVector y_pt, RObject gp, RObject name);
RcppExport SEXP _gridtext_text_grob(SEXP labelSEXP, SEXP x_ptSEXP, SEXP y_ptSEXP, SEXP gpSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type label(labelSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_pt(y_ptSEXP);
    Rcpp::traits::input_parameter< RObject >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< RObject >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(text_grob(label, x_pt, y_pt, gp, name));
    return rcpp_result_gen;
END_RCPP
}
// raster_grob
List raster_grob(RObject image, NumericVector x_pt, NumericVector y_pt, NumericVector width_pt, NumericVector height_pt, LogicalVector interpolate, RObject gp, RObject name);
RcppExport SEXP _gridtext_raster_grob(SEXP imageSEXP, SEXP x_ptSEXP, SEXP y_ptSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP, SEXP interpolateSEXP, SEXP gpSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type image(imageSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_pt(y_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type height_pt(height_ptSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type interpolate(interpolateSEXP);
    Rcpp::traits::input_parameter< RObject >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< RObject >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_grob(image, x_pt, y_pt, width_pt, height_pt, interpolate, gp, name));
    return rcpp_result_gen;
END_RCPP
}
// rect_grob
List rect_grob(NumericVector x_pt, NumericVector y_pt, NumericVector width_pt, NumericVector height_pt, RObject gp, RObject name);
RcppExport SEXP _gridtext_rect_grob(SEXP x_ptSEXP, SEXP y_ptSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP, SEXP gpSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_pt(y_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type height_pt(height_ptSEXP);
    Rcpp::traits::input_parameter< RObject >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< RObject >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rect_grob(x_pt, y_pt, width_pt, height_pt, gp, name));
    return rcpp_result_gen;
END_RCPP
}
// roundrect_grob
List roundrect_grob(NumericVector x_pt, NumericVector y_pt, NumericVector width_pt, NumericVector height_pt, NumericVector r_pt, RObject gp, RObject name);
RcppExport SEXP _gridtext_roundrect_grob(SEXP x_ptSEXP, SEXP y_ptSEXP, SEXP width_ptSEXP, SEXP height_ptSEXP, SEXP r_ptSEXP, SEXP gpSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x_pt(x_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_pt(y_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width_pt(width_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type height_pt(height_ptSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r_pt(r_ptSEXP);
    Rcpp::traits::input_parameter< RObject >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< RObject >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(roundrect_grob(x_pt, y_pt, width_pt, height_pt, r_pt, gp, name));
    return rcpp_result_gen;
END_RCPP
}
// set_grob_coords
RObject set_grob_coords(RObject grob, NumericVector x, NumericVector y);
RcppExport SEXP _gridtext_set_grob_coords(SEXP grobSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type grob(grobSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(set_grob_coords(grob, x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gridtext_bl_make_null_box", (DL_FUNC) &_gridtext_bl_make_null_box, 2},
    {"_gridtext_bl_make_par_box", (DL_FUNC) &_gridtext_bl_make_par_box, 4},
    {"_gridtext_bl_make_rect_box", (DL_FUNC) &_gridtext_bl_make_rect_box, 11},
    {"_gridtext_bl_make_text_box", (DL_FUNC) &_gridtext_bl_make_text_box, 3},
    {"_gridtext_bl_make_raster_box", (DL_FUNC) &_gridtext_bl_make_raster_box, 9},
    {"_gridtext_bl_make_vbox", (DL_FUNC) &_gridtext_bl_make_vbox, 5},
    {"_gridtext_bl_make_regular_space_glue", (DL_FUNC) &_gridtext_bl_make_regular_space_glue, 3},
    {"_gridtext_bl_make_forced_break_penalty", (DL_FUNC) &_gridtext_bl_make_forced_break_penalty, 0},
    {"_gridtext_bl_make_never_break_penalty", (DL_FUNC) &_gridtext_bl_make_never_break_penalty, 0},
    {"_gridtext_bl_box_width", (DL_FUNC) &_gridtext_bl_box_width, 1},
    {"_gridtext_bl_box_height", (DL_FUNC) &_gridtext_bl_box_height, 1},
    {"_gridtext_bl_box_ascent", (DL_FUNC) &_gridtext_bl_box_ascent, 1},
    {"_gridtext_bl_box_descent", (DL_FUNC) &_gridtext_bl_box_descent, 1},
    {"_gridtext_bl_box_voff", (DL_FUNC) &_gridtext_bl_box_voff, 1},
    {"_gridtext_bl_calc_layout", (DL_FUNC) &_gridtext_bl_calc_layout, 3},
    {"_gridtext_bl_place", (DL_FUNC) &_gridtext_bl_place, 3},
    {"_gridtext_bl_render", (DL_FUNC) &_gridtext_bl_render, 3},
    {"_gridtext_grid_renderer", (DL_FUNC) &_gridtext_grid_renderer, 0},
    {"_gridtext_grid_renderer_text", (DL_FUNC) &_gridtext_grid_renderer_text, 5},
    {"_gridtext_grid_renderer_text_details", (DL_FUNC) &_gridtext_grid_renderer_text_details, 2},
    {"_gridtext_grid_renderer_raster", (DL_FUNC) &_gridtext_grid_renderer_raster, 7},
    {"_gridtext_grid_renderer_rect", (DL_FUNC) &_gridtext_grid_renderer_rect, 7},
    {"_gridtext_grid_renderer_collect_grobs", (DL_FUNC) &_gridtext_grid_renderer_collect_grobs, 1},
    {"_gridtext_unit_pt", (DL_FUNC) &_gridtext_unit_pt, 1},
    {"_gridtext_gpar_empty", (DL_FUNC) &_gridtext_gpar_empty, 0},
    {"_gridtext_text_grob", (DL_FUNC) &_gridtext_text_grob, 5},
    {"_gridtext_raster_grob", (DL_FUNC) &_gridtext_raster_grob, 8},
    {"_gridtext_rect_grob", (DL_FUNC) &_gridtext_rect_grob, 6},
    {"_gridtext_roundrect_grob", (DL_FUNC) &_gridtext_roundrect_grob, 7},
    {"_gridtext_set_grob_coords", (DL_FUNC) &_gridtext_set_grob_coords, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_gridtext(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
