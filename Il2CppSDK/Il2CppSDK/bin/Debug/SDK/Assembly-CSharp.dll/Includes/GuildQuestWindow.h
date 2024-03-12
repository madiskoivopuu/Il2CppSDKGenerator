#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class GuildQuestWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeButtons() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _questView() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _emptyPanel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _playerViewPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _playerViews() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _playerRewards() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildQuestWindow*))(Il2CppBase() + 0x1939788))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildQuestWindow*))(Il2CppBase() + 0x193987C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GuildQuestWindow*, float))(Il2CppBase() + 0x1939C0C))(this, deltaTime);
	}

};

}
