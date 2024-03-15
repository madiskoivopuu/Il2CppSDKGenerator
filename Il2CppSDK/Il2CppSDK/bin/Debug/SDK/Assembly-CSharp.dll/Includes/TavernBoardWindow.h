#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class TavernBoardWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardWindow"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeButtons() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _questsContainer() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = TavernBoardQuestView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppList<TavernBoardQuestView*>*& _questViews() {
		return *(Il2CppList<TavernBoardQuestView*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& _sendClaim() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB064))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB294))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB584))(this);
	}
	template <typename R = void> R InitQuestViews() {
		return ((R (*)(TavernBoardWindow*))(Il2CppBase() + 0x16AB7B8))(this);
	}
	template <typename R = void> R OnClaimClick(TavernBoardQuestView* questView) {
		return ((R (*)(TavernBoardWindow*, TavernBoardQuestView*))(Il2CppBase() + 0x16ABE98))(this, questView);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(TavernBoardWindow*, float))(Il2CppBase() + 0x16ABF20))(this, deltaTime);
	}
	template <typename R = void> R ShowClaimQuestResult(Il2CppString* questName, GiveRewardResult result) {
		return ((R (*)(TavernBoardWindow*, Il2CppString*, GiveRewardResult))(Il2CppBase() + 0x16AC268))(this, questName, result);
	}

};

