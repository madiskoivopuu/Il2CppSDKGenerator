#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildQuestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestWindow"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeButtons() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = GuildQuestView*> R& _questView() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _emptyPanel() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = GuildQuestPlayerView*> R& _playerViewPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Il2CppList<GuildQuestPlayerView*>*& _playerViews() {
		return *(Il2CppList<GuildQuestPlayerView*>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _playerRewards() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GuildQuestWindow*))(Il2CppBase() + 0x1939788))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildQuestWindow*))(Il2CppBase() + 0x193987C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GuildQuestWindow*, float))(Il2CppBase() + 0x1939C0C))(this, deltaTime);
	}

};

