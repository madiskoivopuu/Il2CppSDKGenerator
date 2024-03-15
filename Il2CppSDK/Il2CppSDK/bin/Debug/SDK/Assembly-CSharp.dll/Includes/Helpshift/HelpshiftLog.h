#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftLog"));
	}


	template <typename R = int32_t> static R v(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290048))(0, tag, log);
	}
	template <typename R = int32_t> static R d(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12900B8))(0, tag, log);
	}
	template <typename R = int32_t> static R i(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290128))(0, tag, log);
	}
	template <typename R = int32_t> static R w(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290198))(0, tag, log);
	}
	template <typename R = int32_t> static R e(Il2CppString* tag, Il2CppString* log) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290208))(0, tag, log);
	}

};

}
