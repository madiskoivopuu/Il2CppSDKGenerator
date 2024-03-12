#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ClanJoinSearchingWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinSearchingWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& StopSearchButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& StatusText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> static T& _timeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _dotsCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E2B8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E3D8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanJoinSearchingWindow*, float))(Il2CppBase() + 0x158E434))(this, deltaTime);
	}
	template <typename T = void> T OnStopSearchButtonPressed() {
		return ((T (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E64C))(this);
	}
	template <typename T = void> T NotifyServerAndClose(uintptr_t context) {
		return ((T (*)(ClanJoinSearchingWindow*, uintptr_t))(Il2CppBase() + 0x158EABC))(this, context);
	}
	template <typename T = void> T OnShowb__7_0() {
		return ((T (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158EDC8))(this);
	}

};

}
