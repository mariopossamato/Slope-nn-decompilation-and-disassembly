#ifndef NN_UTIL_INTRUSIVELISTNODE_HXX
#define NN_UTIL_INTRUSIVELISTNODE_HXX

namespace nn::util {
class IntrusiveListNode {
public:
  IntrusiveListNode();
  IntrusiveListNode(IntrusiveListNode const&) = delete;
  IntrusiveListNode& operator=(IntrusiveListNode const&) = delete;
  bool IsLinked() const;
private:
  IntrusiveListNode* GetPrev();
  const IntrusiveListNode* GetPrev() const;
  IntrusiveListNode* GetNext();
  const IntrusiveListNode* GetNext() const;
  void LinkPrev(IntrusiveListNode* pNode);
  void LinkPrev(IntrusiveListNode* pFirst, IntrusiveListNode* pLast);
  void LinkNext(IntrusiveListNode* pNode);
  void LinkNext(IntrusiveListNode* pFirst, IntrusiveListNode* pLast);
  void Unlink();
  void Unlink(IntrusiveListNode* pLast);
  IntrusiveListNode* m_pPrev;
  IntrusiveListNode* m_pNext;
};
} // end namespace nn::util

#endif
