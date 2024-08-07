#ifndef NN_UI2D_DETAIL_PANEBASE_HXX
#define NN_UI2D_DETAIL_PANEBASE_HXX

#include "nn/util/IntrusiveListNode.hxx"

namespace nn::ui2d::detail {
struct PaneBase {
  PaneBase() = default;
  PaneBase(PaneBase const&) = delete;
  PaneBase& operator=(PaneBase const&) = delete;
  virtual ~PaneBase() = default;
  nn::util::IntrusiveListNode m_Link;
};
} // namespace nn::ui2d::detail

#endif
