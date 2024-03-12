#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class QuestsDebugWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsDebugWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _questsContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _filterInputField() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _partialSearchToggle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _quests() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& currentFilter() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& needPartial() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(QuestsDebugWindow*))(Il2CppBase() + 0x1707448))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(QuestsDebugWindow*))(Il2CppBase() + 0x17075EC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(QuestsDebugWindow*, float))(Il2CppBase() + 0x1707774))(this, deltaTime);
	}
	template <typename T = bool> T IsNeedToShow(Il2CppString* questName) {
		return ((T (*)(QuestsDebugWindow*, Il2CppString*))(Il2CppBase() + 0x1707E30))(this, questName);
	}
	template <typename T = void> T Awakeb__10_0(Il2CppString* text) {
		return ((T (*)(QuestsDebugWindow*, Il2CppString*))(Il2CppBase() + 0x1708014))(this, text);
	}
	template <typename T = void> T Awakeb__10_1(bool value) {
		return ((T (*)(QuestsDebugWindow*, bool))(Il2CppBase() + 0x170801C))(this, value);
	}

};

}
