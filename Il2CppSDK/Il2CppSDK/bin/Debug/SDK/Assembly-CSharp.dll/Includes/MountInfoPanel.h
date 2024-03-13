#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInfoPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInfoPanel"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _typeAndGrade() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TextMonoBehaviour*> T& _tenacity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TextMonoBehaviour*> T& _slotsCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TextMonoBehaviour*> T& _mountSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _mountSkills() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Show(UIWindow* window, IInventoryItem* mount) {
		return ((T (*)(MountInfoPanel*, UIWindow*, IInventoryItem*))(Il2CppBase() + 0x1545C2C))(this, window, mount);
	}

};

