#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDEditorWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDEditorWindow"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DTDEditorWindow*> static T& Choise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDEditorWindow*> static T& Analytics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDEditorWindow*> static T& Notifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
