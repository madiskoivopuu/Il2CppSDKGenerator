#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GlobalEventWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventWindow"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _closeButtons() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _caption() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _captionIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _dialogueIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _questsPanel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _questsContainer() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = GlobalEventQuestView*> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<GlobalEventQuestView*>*> T& _questViews() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& _tempBuffName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _questsNames() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _showProgress() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GlobalEventWindow*))(Il2CppBase() + 0x17737BC))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(GlobalEventWindow*))(Il2CppBase() + 0x17738AC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GlobalEventWindow*))(Il2CppBase() + 0x1773994))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GlobalEventWindow*, float))(Il2CppBase() + 0x17744DC))(this, deltaTime);
	}
	template <typename T = void> T QuestClaimClick(ActQuestView* view) {
		return ((T (*)(GlobalEventWindow*, ActQuestView*))(Il2CppBase() + 0x1774980))(this, view);
	}
	template <typename T = bool> T ShowClaimQuestResult(Il2CppString* questName, GiveRewardResult* result) {
		return ((T (*)(GlobalEventWindow*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x1774B18))(this, questName, result);
	}

};

