#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SROptionsPropertyChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SROptionsPropertyChanged"));
	}


	template <typename R = void> R Invoke(Il2CppObject* sender, Il2CppString* propertyName) {
		return ((R (*)(SROptionsPropertyChanged*, Il2CppObject*, Il2CppString*))(Il2CppBase() + 0x1354EB4))(this, sender, propertyName);
	}
	template <typename R = uintptr_t> R BeginInvoke(Il2CppObject* sender, Il2CppString* propertyName, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(SROptionsPropertyChanged*, Il2CppObject*, Il2CppString*, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x1355468))(this, sender, propertyName, callback, object);
	}
	template <typename R = void> R EndInvoke(uintptr_t result) {
		return ((R (*)(SROptionsPropertyChanged*, uintptr_t))(Il2CppBase() + 0x1355498))(this, result);
	}

};

