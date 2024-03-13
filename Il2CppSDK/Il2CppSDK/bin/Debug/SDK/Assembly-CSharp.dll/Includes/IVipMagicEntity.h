#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IVipMagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IVipMagicEntity"));
	}


	template <typename T = VipMagicComponent*> T get_vipMagic() {
		return ((T (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasVipMagic() {
		return ((T (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddVipMagic(VipBonusType* newType) {
		return ((T (*)(IVipMagicEntity*, VipBonusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceVipMagic(VipBonusType* newType) {
		return ((T (*)(IVipMagicEntity*, VipBonusType*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveVipMagic() {
		return ((T (*)(IVipMagicEntity*))(Il2CppBase() + 0x0))(this);
	}

};

