#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SkillSelectWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSelectWindow"));
	}

	template <typename R = SkillSlot*> R& SkillSlotPrefab() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Container() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(SkillSelectWindow*))(Il2CppBase() + 0x14818A4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(SkillSelectWindow*))(Il2CppBase() + 0x14826C0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(SkillSelectWindow*, float))(Il2CppBase() + 0x148271C))(this, deltaTime);
	}
	template <typename R = void> R ISkillEventHandler_OnSelect(SkillSlot* skillSlot) {
		return ((R (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828A8))(this, skillSlot);
	}
	template <typename R = void> R ISkillEventHandler_OnHold(SkillSlot* skillSlot) {
		return ((R (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828AC))(this, skillSlot);
	}
	template <typename R = void> R ISkillEventHandler_OnRelease(SkillSlot* skillSlot) {
		return ((R (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828B0))(this, skillSlot);
	}

};

