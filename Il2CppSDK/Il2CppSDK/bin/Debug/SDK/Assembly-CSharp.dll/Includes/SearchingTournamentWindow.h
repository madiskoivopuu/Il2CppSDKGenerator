#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SearchingTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchingTournamentWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& SearchProgress() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& SearchTimer() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(SearchingTournamentWindow*))(Il2CppBase() + 0x135C074))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(SearchingTournamentWindow*))(Il2CppBase() + 0x135C13C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(SearchingTournamentWindow*, float))(Il2CppBase() + 0x135C1A8))(this, deltaTime);
	}

};

