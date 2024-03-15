#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IUnitySegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IUnitySegment"));
	}


	template <typename R = void> R add_OnSegmentRecieved(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnitySegment*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnSegmentRecieved(Action1<Il2CppString*>* value) {
		return ((R (*)(IUnitySegment*, Action1<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}

};

