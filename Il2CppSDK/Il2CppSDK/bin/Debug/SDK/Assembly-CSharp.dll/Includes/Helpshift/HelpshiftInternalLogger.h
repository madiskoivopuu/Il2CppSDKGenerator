#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftInternalLogger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftInternalLogger"));
	}

	template <typename R = Il2CppString*> static R& TAG() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& hsInternalLogger() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = void> static R d(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x128FBA4))(0, message);
	}
	template <typename R = void> static R e(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x128FCF0))(0, message);
	}
	template <typename R = void> static R w(Il2CppString* message) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x128FE3C))(0, message);
	}

};

}
