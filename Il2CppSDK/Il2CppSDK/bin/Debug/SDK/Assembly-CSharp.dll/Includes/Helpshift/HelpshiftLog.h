#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Helpshift {

class HelpshiftLog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Helpshift", "HelpshiftLog"));
	}


	template <typename T = int32_t> static T v(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290048))(0, tag, log);
	}
	template <typename T = int32_t> static T d(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12900B8))(0, tag, log);
	}
	template <typename T = int32_t> static T i(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290128))(0, tag, log);
	}
	template <typename T = int32_t> static T w(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290198))(0, tag, log);
	}
	template <typename T = int32_t> static T e(Il2CppString* tag, Il2CppString* log) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1290208))(0, tag, log);
	}

};

}
