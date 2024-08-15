#ifndef NN_UI2D_PANE_HXX
#define NN_UI2D_PANE_HXX

#include "nn/ui2d/detail/PaneBase.hxx"

namespace nn::ui2d {
class Pane : public nn::ui2d::detail::PaneBase {
private:
  Pane* m_pParent;
};
} // namespace nn::ui2d

#endif
