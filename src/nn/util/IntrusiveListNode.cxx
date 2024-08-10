#include "nn/util/IntrusiveListNode.hxx"

nn::util::IntrusiveListNode::IntrusiveListNode() {
  this->m_pPrev = this;
  this->m_pNext = this;
}

bool nn::util::IntrusiveListNode::IsLinked() const {
  return this->m_pNext != this;
}

nn::util::IntrusiveListNode* nn::util::IntrusiveListNode::GetPrev() {
  return this->m_pPrev;
}

const nn::util::IntrusiveListNode* nn::util::IntrusiveListNode::GetPrev() const {
  return this->m_pPrev;
}

nn::util::IntrusiveListNode* nn::util::IntrusiveListNode::GetNext() {
  return this->m_pNext;
}

const nn::util::IntrusiveListNode* nn::util::IntrusiveListNode::GetNext() const {
  return this->m_pNext;
}

void nn::util::IntrusiveListNode::LinkPrev(nn::util::IntrusiveListNode* pNode) {
  LinkPrev(pNode, pNode);
}

void nn::util::IntrusiveListNode::LinkPrev(nn::util::IntrusiveListNode* pFirst, nn::util::IntrusiveListNode* pLast) {
  IntrusiveListNode* pNode = pLast->m_pPrev;
  pFirst->m_pPrev = this->m_pPrev;
  pNode->m_pNext = this;
  this->m_pPrev->m_pNext = pFirst;
  this->m_pPrev = pNode;
}

void nn::util::IntrusiveListNode::LinkNext(nn::util::IntrusiveListNode* pNode) {
  LinkNext(pNode, pNode);
}

void nn::util::IntrusiveListNode::LinkNext(nn::util::IntrusiveListNode* pFirst, nn::util::IntrusiveListNode* pLast) {
  IntrusiveListNode* pNode = pLast->m_pPrev;
  pFirst->m_pPrev = this;
  pNode->m_pNext = this->m_pNext;
  this->m_pNext->m_pPrev = pNode;
  this->m_pNext = pFirst;
}

void nn::util::IntrusiveListNode::Unlink() {
  Unlink(this->m_pNext);
}

void nn::util::IntrusiveListNode::Unlink(nn::util::IntrusiveListNode* pLast) {
  IntrusiveListNode* pNode = pLast->m_pPrev;
  this->m_pPrev->m_pNext = pLast;
  pLast->m_pPrev = this->m_pPrev;
  pNode->m_pNext = this;
  this->m_pPrev = pNode;
}
