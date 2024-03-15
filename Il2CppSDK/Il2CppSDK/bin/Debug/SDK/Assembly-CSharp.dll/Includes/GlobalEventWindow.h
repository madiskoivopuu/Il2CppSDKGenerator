#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GlobalEventWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventWindow"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _closeButtons() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _caption() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _captionIcon() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _message() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _dialogueIcon() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& _questsPanel() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _questsContainer() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = GlobalEventQuestView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	 Il2CppList<GlobalEventQuestView*>*& _questViews() {
		return *(Il2CppList<GlobalEventQuestView*>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppString*> R& _tempBuffName() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	 Il2CppList<Il2CppString*>*& _questsNames() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0xD8);
	}
	template <typename R = bool> R& _showProgress() {
		return *(R*)((uintptr_t)this + 0xE0);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GlobalEventWindow*))(Il2CppBase() + 0x17737BC))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(GlobalEventWindow*))(Il2CppBase() + 0x17738AC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GlobalEventWindow*))(Il2CppBase() + 0x1773994))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GlobalEventWindow*, float))(Il2CppBase() + 0x17744DC))(this, deltaTime);
	}
	template <typename R = void> R QuestClaimClick(ActQuestView* view) {
		return ((R (*)(GlobalEventWindow*, ActQuestView*))(Il2CppBase() + 0x1774980))(this, view);
	}
	template <typename R = bool> R ShowClaimQuestResult(Il2CppString* questName, GiveRewardResult* result) {
		return ((R (*)(GlobalEventWindow*, Il2CppString*, GiveRewardResult*))(Il2CppBase() + 0x1774B18))(this, questName, result);
	}

};

