#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TavernBoardWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeButtons() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _questsContainer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = TavernBoardQuestView*> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<TavernBoardQuestView*>*> T& _questViews() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _sendClaim() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB064))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB294))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB584))(this);
	}
	template <typename T = void> T InitQuestViews() {
		return ((T (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB7B8))(this);
	}
	template <typename T = void> T OnClaimClick(TavernBoardQuestView* questView) {
		return ((T (*)(TavernBoardWindow*, TavernBoardQuestView*))(Il2CppBase() + 0x16ABE98))(this, questView);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(TavernBoardWindow*, float))(Il2CppBase() + 0x16ABF20))(this, deltaTime);
	}
	template <typename T = void> T ShowClaimQuestResult(Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(TavernBoardWindow*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x16AC268))(this, questName, result);
	}

};

