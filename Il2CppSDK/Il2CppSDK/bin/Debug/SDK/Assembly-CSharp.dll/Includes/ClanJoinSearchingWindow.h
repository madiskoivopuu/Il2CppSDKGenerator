#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanJoinSearchingWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinSearchingWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& StopSearchButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& StatusText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = float> static R& _timeout() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _dotsCount() {
		return *(R*)((uintptr_t)this + 0x94);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E2B8))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E3D8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanJoinSearchingWindow*, float))(Il2CppBase() + 0x158E434))(this, deltaTime);
	}
	template <typename R = void> R OnStopSearchButtonPressed() {
		return ((R (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158E64C))(this);
	}
	template <typename R = void> R NotifyServerAndClose(DataContext* context) {
		return ((R (*)(ClanJoinSearchingWindow*, DataContext*))(Il2CppBase() + 0x158EABC))(this, context);
	}
	template <typename R = void> R OnShowb__7_0() {
		return ((R (*)(ClanJoinSearchingWindow*))(Il2CppBase() + 0x158EDC8))(this);
	}

};

