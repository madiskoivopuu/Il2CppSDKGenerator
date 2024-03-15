#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossOperationResultData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossOperationResultData"));
	}

	template <typename R = int32_t> R& Progress() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& Opened() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& ErrorMsg() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BossOperationResultData*, uintptr_t))(Il2CppBase() + 0x16CCDDC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BossOperationResultData*, uintptr_t))(Il2CppBase() + 0x16CCE40))(this, reader);
	}

};

