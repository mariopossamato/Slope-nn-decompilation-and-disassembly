#ifndef NN_UI2D_DETAIL_PANEBASE_HXX
#define NN_UI2D_DETAIL_PANEBASE_HXX

namespace nn::ui2d::detail {
struct PaneBase {
  PaneBase();
  PaneBase(PaneBase const&) = delete;
  PaneBase& operator=(PaneBase const&) = delete;
  virtual ~PaneBase();
};
} // end namespace nn::ui2d::detail

#endif
