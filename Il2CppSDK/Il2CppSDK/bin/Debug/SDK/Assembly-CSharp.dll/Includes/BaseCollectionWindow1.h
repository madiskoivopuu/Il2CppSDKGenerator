#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

template <typename T>
class BaseCollectionWindow1 : public BaseInventoryWindow1<T>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseCollectionWindow`1"));
	}

	 HashSet1<Il2CppString*>*& _needResources() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = FusionContainer*> R& _fusionContainer() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _fuseButton() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _infinityText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _fuseAnimator() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _pointsPanel() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _pointsText() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _sendFuse() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnFuse() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R InputSlotsAreFull() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R OutSlotIsEmpty() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BaseCollectionWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnFuseResult(Il2CppString* errorMsg) {
		return ((R (*)(BaseCollectionWindow1*, Il2CppString*))(Il2CppBase() + 0x0))(this, errorMsg);
	}

};

