#ifndef NN_UTIL_INTRUSIVELISTNODE_HXX
#define NN_UTIL_INTRUSIVELISTNODE_HXX

namespace nn::util {
class IntrusiveListNode {
private:
  IntrusiveListNode *m_Prev;
  IntrusiveListNode *m_Next;
};
} // end namespace nn::util

#endif
