#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseInventoryWindow1.h" 

class BaseCollectionWindow1 : public BaseInventoryWindow1<uintptr_t>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseCollectionWindow`1"));
	}

	template <typename T = HashSet1Il2CppString*>*> T& _needResources() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = FusionContainer*> T& _fusionContainer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _fuseButton() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _infinityText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _fuseAnimator() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _pointsPanel() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _pointsText() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _sendFuse() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnFuse() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T InputSlotsAreFull() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T OutSlotIsEmpty() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BaseCollectionWindow1*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BaseCollectionWindow1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnFuseResult(Il2CppString* errorMsg) {
		return ((T (*)(BaseCollectionWindow1*, Il2CppString*))(Il2CppBase() + 0x0))(this, errorMsg);
	}

};

