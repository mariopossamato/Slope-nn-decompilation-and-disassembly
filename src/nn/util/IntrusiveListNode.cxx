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
}

const nn::util::IntrusiveListNode* nn::util::IntrusiveListNode::GetNext() const {
}

void nn::util::IntrusiveListNode::LinkPrev(nn::util::IntrusiveListNode* pNode) {
}

void nn::util::IntrusiveListNode::LinkPrev(nn::util::IntrusiveListNode* pFirst, nn::util::IntrusiveListNode* pLast) {
}

void nn::util::IntrusiveListNode::LinkNext(nn::util::IntrusiveListNode* pNode) {
}

void nn::util::IntrusiveListNode::LinkNext(nn::util::IntrusiveListNode* pFirst, nn::util::IntrusiveListNode* pLast) {
}

void nn::util::IntrusiveListNode::Unlink() {
}

void nn::util::IntrusiveListNode::Unlink(nn::util::IntrusiveListNode* pLast) {
}
