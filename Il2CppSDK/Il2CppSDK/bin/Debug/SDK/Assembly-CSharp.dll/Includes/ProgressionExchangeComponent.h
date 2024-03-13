#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProgressionExchangeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProgressionExchangeComponent"));
	}

	template <typename T = int32_t> T& Limit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ResetTimeout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Resources() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Filters() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Rewards() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ConsiderDurability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& WindowLine() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& TooMuchPointsPopUpCaption() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& TooMuchPointsPopUpLine() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& RequiredResourcesCaption() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& RequiredResourcesDescription() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& RequiredResourcesFirstLine() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& RequiredResourcesSecondLine() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& RequiredResourcesHideLine() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& UseButtonText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& RequiredResourcesHideReward() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& RequiredResourcesHideRequest() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = Il2CppString*> T& Effect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& AnalyticEvent() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ProgressionExchangeComponent*, Il2CppObject*))(Il2CppBase() + 0x16E5578))(this, target);
	}

};

