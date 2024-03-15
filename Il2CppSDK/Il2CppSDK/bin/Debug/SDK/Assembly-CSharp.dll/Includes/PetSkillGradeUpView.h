#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSkillGradeUpView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillGradeUpView"));
	}

	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = PetSkillItemView*> R& _from() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _arrow() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = PetSkillItemView*> R& _to() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _selectMark() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ItemEntity*> R& Skill() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Action1<PetSkillGradeUpView*>*& ClickEvent() {
		return *(Action1<PetSkillGradeUpView*>**)((uintptr_t)this + 0x50);
	}

	template <typename R = ItemEntity*> R get_Skill() {
		return ((R (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECE30))(this);
	}
	template <typename R = void> R set_Skill(ItemEntity* value) {
		return ((R (*)(PetSkillGradeUpView*, ItemEntity*))(Il2CppBase() + 0x16ECE38))(this, value);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECE40))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(PetSkillGradeUpView*, bool))(Il2CppBase() + 0x16ECE5C))(this, value);
	}
	template <typename R = void> R add_ClickEvent(Action1<PetSkillGradeUpView*>* value) {
		return ((R (*)(PetSkillGradeUpView*, Action1<PetSkillGradeUpView*>*))(Il2CppBase() + 0x16ECEB4))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<PetSkillGradeUpView*>* value) {
		return ((R (*)(PetSkillGradeUpView*, Action1<PetSkillGradeUpView*>*))(Il2CppBase() + 0x16ECF54))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECFF4))(this);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PetSkillGradeUpView*, TooltipView*))(Il2CppBase() + 0x16ED150))(this, tooltipView);
	}
	template <typename R = void> R Show(ItemEntity* petSkill) {
		return ((R (*)(PetSkillGradeUpView*, ItemEntity*))(Il2CppBase() + 0x16ED194))(this, petSkill);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ED498))(this);
	}
	template <typename R = void> R Awakeb__16_0() {
		return ((R (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ED72C))(this);
	}
	template <typename R = void> R Awakeb__16_1(ItemView* itemView) {
		return ((R (*)(PetSkillGradeUpView*, ItemView*))(Il2CppBase() + 0x16ED78C))(this, itemView);
	}
	template <typename R = void> R Awakeb__16_2(ItemView* itemView) {
		return ((R (*)(PetSkillGradeUpView*, ItemView*))(Il2CppBase() + 0x16ED7EC))(this, itemView);
	}

};

