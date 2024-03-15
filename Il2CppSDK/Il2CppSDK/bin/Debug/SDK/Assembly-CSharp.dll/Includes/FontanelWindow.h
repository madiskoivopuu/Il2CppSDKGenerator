#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class FontanelWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelWindow"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& _gradeText() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = uintptr_t> R& _currentLevelCap() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	template <typename R = FontanelContainer*> R& _requirementsContainer() {
		return *(R*)((uintptr_t)this + 0x170);
	}
	template <typename R = uintptr_t> R& _finalizeBtn() {
		return *(R*)((uintptr_t)this + 0x178);
	}
	template <typename R = bool> R& _finalized() {
		return *(R*)((uintptr_t)this + 0x180);
	}
	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x188);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(FontanelWindow*))(Il2CppBase() + 0x15FAB78))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(FontanelWindow*))(Il2CppBase() + 0x15FAE74))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(FontanelWindow*))(Il2CppBase() + 0x15FAF30))(this);
	}
	template <typename R = void> R OnClickFinalize() {
		return ((R (*)(FontanelWindow*))(Il2CppBase() + 0x15FB6F4))(this);
	}
	template <typename R = void> R OnFinalizeResult(FinalizeResultData data) {
		return ((R (*)(FontanelWindow*, FinalizeResultData))(Il2CppBase() + 0x15FB8AC))(this, data);
	}
	template <typename R = void> R OnDrop(IInventoryItem* item) {
		return ((R (*)(FontanelWindow*, IInventoryItem*))(Il2CppBase() + 0x15FBA00))(this, item);
	}
	template <typename R = void> R OnDoubleClick(IInventoryItem* item) {
		return ((R (*)(FontanelWindow*, IInventoryItem*))(Il2CppBase() + 0x15FBF54))(this, item);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(FontanelWindow*))(Il2CppBase() + 0x15FC274))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(FontanelWindow*, float))(Il2CppBase() + 0x15FC4BC))(this, deltaTime);
	}

};

