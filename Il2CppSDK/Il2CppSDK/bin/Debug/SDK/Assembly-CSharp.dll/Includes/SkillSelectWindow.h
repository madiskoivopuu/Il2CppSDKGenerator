#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SkillSelectWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillSelectWindow"));
	}

	template <typename T = SkillSlot*> T& SkillSlotPrefab() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(SkillSelectWindow*))(Il2CppBase() + 0x14818A4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SkillSelectWindow*))(Il2CppBase() + 0x14826C0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(SkillSelectWindow*, float))(Il2CppBase() + 0x148271C))(this, deltaTime);
	}
	template <typename T = void> T ISkillEventHandler_OnSelect(SkillSlot* skillSlot) {
		return ((T (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828A8))(this, skillSlot);
	}
	template <typename T = void> T ISkillEventHandler_OnHold(SkillSlot* skillSlot) {
		return ((T (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828AC))(this, skillSlot);
	}
	template <typename T = void> T ISkillEventHandler_OnRelease(SkillSlot* skillSlot) {
		return ((T (*)(SkillSelectWindow*, SkillSlot*))(Il2CppBase() + 0x14828B0))(this, skillSlot);
	}

};

