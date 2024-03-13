#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetResetTimeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetResetTimeData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetResetTimeData*, uintptr_t))(Il2CppBase() + 0x1625A78))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetResetTimeData*, uintptr_t))(Il2CppBase() + 0x1625ACC))(this, reader);
	}

};

