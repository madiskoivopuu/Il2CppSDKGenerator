#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestTrackerController"));
	}


	template <typename T = bool> T get_IsExpanded() {
		return ((T (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_ActiveInHierarchy() {
		return ((T (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Containes(Il2CppString* questName) {
		return ((T (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename T = void> T Init(IHUDWindow* window) {
		return ((T (*)(IQuestTrackerController*, IHUDWindow*))(Il2CppBase() + 0x0))(this, window);
	}
	template <typename T = void> T Collapse(bool notSave) {
		return ((T (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, notSave);
	}
	template <typename T = void> T Expand(bool notSave) {
		return ((T (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, notSave);
	}
	template <typename T = void> T ToggleIfNeed() {
		return ((T (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateView(AccountEntity* accountEntity) {
		return ((T (*)(IQuestTrackerController*, AccountEntity*))(Il2CppBase() + 0x0))(this, accountEntity);
	}
	template <typename T = IQuestTrackerView*> T GetView(Il2CppString* questName) {
		return ((T (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename T = void> T RemoveView(Il2CppString* questName) {
		return ((T (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename T = void> T Hide(float time) {
		return ((T (*)(IQuestTrackerController*, float))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}

};

