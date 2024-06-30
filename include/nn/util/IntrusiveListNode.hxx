#ifndef NN_UTIL_INTRUSIVELISTNODE_HXX
#define NN_UTIL_INTRUSIVELISTNODE_HXX

namespace nn::util {
class IntrusiveListNode {
public:
  IntrusiveListNode();
  IntrusiveListNode(IntrusiveListNode const&) = delete;
  IntrusiveListNode& operator=(IntrusiveListNode const&) = delete;
private:
  IntrusiveListNode* m_pPrev;
  IntrusiveListNode* m_pNext;
};
} // end namespace nn::util

#endif
