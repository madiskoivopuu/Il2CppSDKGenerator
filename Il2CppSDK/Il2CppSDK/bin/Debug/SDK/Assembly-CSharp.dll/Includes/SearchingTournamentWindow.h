#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class SearchingTournamentWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SearchingTournamentWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SearchProgress() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SearchTimer() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(SearchingTournamentWindow*))(Il2CppBase() + 0x135C074))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SearchingTournamentWindow*))(Il2CppBase() + 0x135C13C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(SearchingTournamentWindow*, float))(Il2CppBase() + 0x135C1A8))(this, deltaTime);
	}

};

