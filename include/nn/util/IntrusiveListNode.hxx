#ifndef NN_UTIL_INTRUSIVELISTNODE_HXX
#define NN_UTIL_INTRUSIVELISTNODE_HXX

namespace nn::util {
class IntrusiveListNode {
public:
  IntrusiveListNode();
  IntrusiveListNode(IntrusiveListNode const&) = delete;
  IntrusiveListNode& operator=(IntrusiveListNode const&) = delete;
private:
  IntrusiveListNode *m_Prev;
  IntrusiveListNode *m_Next;
};
} // end namespace nn::util

#endif
