#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class ReportProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "ReportProgress"));
	}


	template <typename T = void> T Invoke(Il2CppString* id, double progress, Action1bool>* callback) {
		return ((T (*)(ReportProgress*, Il2CppString*, double, Action1bool>*))(Il2CppBase() + 0x1197E7C))(this, id, progress, callback);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* id, double progress, Action1bool>* callback, uintptr_t __callback, Il2CppObject* object) {
		return ((T (*)(ReportProgress*, Il2CppString*, double, Action1bool>*, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x119823C))(this, id, progress, callback, __callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReportProgress*, uintptr_t))(Il2CppBase() + 0x11982D8))(this, result);
	}

};

}
