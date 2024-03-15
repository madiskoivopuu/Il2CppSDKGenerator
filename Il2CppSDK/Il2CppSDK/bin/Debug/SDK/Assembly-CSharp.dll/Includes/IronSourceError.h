#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceError
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceError"));
	}

	template <typename R = Il2CppString*> R& description() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& code() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = int32_t> R getErrorCode() {
		return ((R (*)(IronSourceError*))(Il2CppBase() + 0x1250C68))(this);
	}
	template <typename R = Il2CppString*> R getDescription() {
		return ((R (*)(IronSourceError*))(Il2CppBase() + 0x1250C70))(this);
	}
	template <typename R = int32_t> R getCode() {
		return ((R (*)(IronSourceError*))(Il2CppBase() + 0x1250C78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(IronSourceError*))(Il2CppBase() + 0x1250C80))(this);
	}

};

