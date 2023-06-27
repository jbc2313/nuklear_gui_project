static void
file_manager(struct nk_context *ctx)
{

    if (nk_begin(ctx, "File_Manager", nk_rect(10, 10, 180, 250),
        NK_WINDOW_BORDER|NK_WINDOW_MOVABLE|NK_WINDOW_SCALABLE|NK_WINDOW_MINIMIZABLE|NK_WINDOW_TITLE))
    {

        nk_layout_row_dynamic(ctx, 35, 1);
        nk_button_label(ctx, "C");
        nk_button_label(ctx, "Quit");
    }
    nk_end(ctx);
}
