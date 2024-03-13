#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class FontanelWindow : public BaseInventoryWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FontanelWindow"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _currentLevelCap() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = FontanelContainer*> T& _requirementsContainer() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _finalizeBtn() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& _finalized() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(FontanelWindow*))(Il2CppBase() + 0x15FAB78))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FontanelWindow*))(Il2CppBase() + 0x15FAE74))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(FontanelWindow*))(Il2CppBase() + 0x15FAF30))(this);
	}
	template <typename T = void> T OnClickFinalize() {
		return ((T (*)(FontanelWindow*))(Il2CppBase() + 0x15FB6F4))(this);
	}
	template <typename T = void> T OnFinalizeResult(FinalizeResultData* data) {
		return ((T (*)(FontanelWindow*, FinalizeResultData*))(Il2CppBase() + 0x15FB8AC))(this, data);
	}
	template <typename T = void> T OnDrop(IInventoryItem* item) {
		return ((T (*)(FontanelWindow*, IInventoryItem*))(Il2CppBase() + 0x15FBA00))(this, item);
	}
	template <typename T = void> T OnDoubleClick(IInventoryItem* item) {
		return ((T (*)(FontanelWindow*, IInventoryItem*))(Il2CppBase() + 0x15FBF54))(this, item);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(FontanelWindow*))(Il2CppBase() + 0x15FC274))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(FontanelWindow*, float))(Il2CppBase() + 0x15FC4BC))(this, deltaTime);
	}

};

