#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetSkillGradeUpView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetSkillGradeUpView"));
	}

	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = PetSkillItemView*> T& _from() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _arrow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = PetSkillItemView*> T& _to() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _selectMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = ItemEntity*> T& Skill() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Action1PetSkillGradeUpView*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = ItemEntity*> T get_Skill() {
		return ((T (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECE30))(this);
	}
	template <typename T = void> T set_Skill(ItemEntity* value) {
		return ((T (*)(PetSkillGradeUpView*, ItemEntity*))(Il2CppBase() + 0x16ECE38))(this, value);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECE40))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(PetSkillGradeUpView*, bool))(Il2CppBase() + 0x16ECE5C))(this, value);
	}
	template <typename T = void> T add_ClickEvent(Action1PetSkillGradeUpView*>* value) {
		return ((T (*)(PetSkillGradeUpView*, Action1PetSkillGradeUpView*>*))(Il2CppBase() + 0x16ECEB4))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1PetSkillGradeUpView*>* value) {
		return ((T (*)(PetSkillGradeUpView*, Action1PetSkillGradeUpView*>*))(Il2CppBase() + 0x16ECF54))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ECFF4))(this);
	}
	template <typename T = void> T Init(TooltipView* tooltipView) {
		return ((T (*)(PetSkillGradeUpView*, TooltipView*))(Il2CppBase() + 0x16ED150))(this, tooltipView);
	}
	template <typename T = void> T Show(ItemEntity* petSkill) {
		return ((T (*)(PetSkillGradeUpView*, ItemEntity*))(Il2CppBase() + 0x16ED194))(this, petSkill);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ED498))(this);
	}
	template <typename T = void> T Awakeb__16_0() {
		return ((T (*)(PetSkillGradeUpView*))(Il2CppBase() + 0x16ED72C))(this);
	}
	template <typename T = void> T Awakeb__16_1(ItemView* itemView) {
		return ((T (*)(PetSkillGradeUpView*, ItemView*))(Il2CppBase() + 0x16ED78C))(this, itemView);
	}
	template <typename T = void> T Awakeb__16_2(ItemView* itemView) {
		return ((T (*)(PetSkillGradeUpView*, ItemView*))(Il2CppBase() + 0x16ED7EC))(this, itemView);
	}

};

