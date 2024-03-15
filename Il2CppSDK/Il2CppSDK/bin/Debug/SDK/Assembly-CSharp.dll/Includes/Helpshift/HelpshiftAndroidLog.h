#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftAndroidLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftAndroidLog"));
	}

	template <typename R = uintptr_t> static R& logger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> static R v(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128D898))(0, tag, log);
	}
	template <typename R = int32_t> static R d(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128D9F0))(0, tag, log);
	}
	template <typename R = int32_t> static R i(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128DB48))(0, tag, log);
	}
	template <typename R = int32_t> static R w(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128DCA0))(0, tag, log);
	}
	template <typename R = int32_t> static R e(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x128DDF8))(0, tag, log);
	}

};

}
