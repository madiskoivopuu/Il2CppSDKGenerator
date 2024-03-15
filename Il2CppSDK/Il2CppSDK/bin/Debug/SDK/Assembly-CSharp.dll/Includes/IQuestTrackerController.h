#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IQuestTrackerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IQuestTrackerController"));
	}


	template <typename R = bool> R get_IsExpanded() {
		return ((R (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_Active() {
		return ((R (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R get_ActiveInHierarchy() {
		return ((R (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R Containes(Il2CppString* questName) {
		return ((R (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename R = void> R Init(IHUDWindow* window) {
		return ((R (*)(IQuestTrackerController*, IHUDWindow*))(Il2CppBase() + 0x0))(this, window);
	}
	template <typename R = void> R Collapse(bool notSave) {
		return ((R (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, notSave);
	}
	template <typename R = void> R Expand(bool notSave) {
		return ((R (*)(IQuestTrackerController*, bool))(Il2CppBase() + 0x0))(this, notSave);
	}
	template <typename R = void> R ToggleIfNeed() {
		return ((R (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R UpdateView(AccountEntity* accountEntity) {
		return ((R (*)(IQuestTrackerController*, AccountEntity*))(Il2CppBase() + 0x0))(this, accountEntity);
	}
	template <typename R = IQuestTrackerView*> R GetView(Il2CppString* questName) {
		return ((R (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename R = void> R RemoveView(Il2CppString* questName) {
		return ((R (*)(IQuestTrackerController*, Il2CppString*))(Il2CppBase() + 0x0))(this, questName);
	}
	template <typename R = void> R Hide(float time) {
		return ((R (*)(IQuestTrackerController*, float))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename R = void> R Restore() {
		return ((R (*)(IQuestTrackerController*))(Il2CppBase() + 0x0))(this);
	}

};

