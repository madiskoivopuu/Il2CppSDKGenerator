#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUserRoleResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUserRoleResponse"));
	}

	template <typename T = MessageParser1GuildUserRoleResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PlayerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Player*> T& player_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1GuildUserRoleResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1947B1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1947B80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947CA0))(this);
	}
	template <typename T = GuildUserRoleResponse*> T Clone() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947DBC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947E18))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GuildUserRoleResponse*, int32_t))(Il2CppBase() + 0x1947E20))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947E28))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(GuildUserRoleResponse*, Il2CppString*))(Il2CppBase() + 0x1947E30))(this, value);
	}
	template <typename T = Player*> T get_Player() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947EB0))(this);
	}
	template <typename T = void> T set_Player(Player* value) {
		return ((T (*)(GuildUserRoleResponse*, Player*))(Il2CppBase() + 0x1947EB8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildUserRoleResponse*, Il2CppObject*))(Il2CppBase() + 0x1947EC0))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildUserRoleResponse* other) {
		return ((T (*)(GuildUserRoleResponse*, GuildUserRoleResponse*))(Il2CppBase() + 0x1947F30))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1947FA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x1948030))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildUserRoleResponse*, uintptr_t))(Il2CppBase() + 0x1948094))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildUserRoleResponse*))(Il2CppBase() + 0x194814C))(this);
	}
	template <typename T = void> T MergeFrom(GuildUserRoleResponse* other) {
		return ((T (*)(GuildUserRoleResponse*, GuildUserRoleResponse*))(Il2CppBase() + 0x1948250))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildUserRoleResponse*, uintptr_t))(Il2CppBase() + 0x1948320))(this, input);
	}

};

}
