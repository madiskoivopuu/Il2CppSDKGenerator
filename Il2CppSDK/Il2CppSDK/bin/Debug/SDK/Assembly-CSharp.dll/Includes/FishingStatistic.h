#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingStatistic"));
	}

	template <typename R = Il2CppString*> R& ToolName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& OscillationName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& UseFishnetName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<bool>*& Success() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& LureName() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& NodeName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Nullable1<float>*& Duration() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x40);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& Result() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x48);
	}

	template <typename R = Il2CppString*> R ToLogString() {
		return ((R (*)(FishingStatistic*))(Il2CppBase() + 0x169A474))(this);
	}

};

