bool ISKLSpecial(u, k, l)

	let g := gcd(k, l);
	
	bool isklspecial = false;
	
	for i := 0 to g - 1
		isklspecial = ISKLSpecial(u, k, l, i);
		if(isklspecial)
			break;
	end for;
	
	return isklspecial;
end 
//
bool ISKLSpecial(u, k, l, seq)

	String indices = "Seq";
	int firstindex = seq;
	int currentindex = seq;
	
	do
		if(currentindex < l)
			currentindex += k;
			indices += "," + currentindex;
		else
			currentindex -= l;
			indicies += "," + currentindex;
		end if
		
	while(firstindex != currentindex)
	
	String uatindices = "";
	for(int i = 0; i < len(indices); i++)
		uatindices += u(i);
	end
	
	return !isOnePeriodic(uatindices) && hasAtleastTwoHoles(uatindices);
	
end 

bool isOnePeriodic(u)
	char firstChar = u(0);
	char underscore = "_";
	
	bool isOnePeriodic = true;
	
	for(int i = 0; i < len(u); i++)
		if(u(i) != firstChar && u(i) != underscore)
			isOnePeriodic = false;
			break;
		end
	end
	
	return isOnePeriodic;
end

bool hasAtleastTwoHoles(u)

	int cnt = 0;
	
	for(int i = 0; i < len(u); i++)
		if(u(i) == "_")
			cnt++;
		if(cnt >= 2)
			break;
	end
	
return cnt >= 2;

end

	
			
			
			
			
			
			
			
	
